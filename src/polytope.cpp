#include <RcppEigen.h>
// [[Rcpp::depends(RcppEigen)]]

using namespace Eigen;

// [[Rcpp::export]]
bool check_constraints_sparse(Eigen::MappedSparseMatrix<double> A, Eigen::VectorXd x, Eigen::VectorXd b)
{
  // 1. Efficient Sparse-Dense Multiplication: Ax
  Eigen::VectorXd Ax = A * x;

  // 2. Check if the point satisfies all linear inequalities (Ax <= b)
  for (int i = 0; i < Ax.size(); ++i)
  {
    if (Ax[i] > b[i] + 1e-9)
    { // Added a small epsilon for numerical stability
      return false;
    }
  }
  return true;
}