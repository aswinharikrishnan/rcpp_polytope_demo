#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
bool isInsidePolytope(NumericMatrix A, NumericVector b, NumericVector x)
{
  int n = A.nrow();
  int m = A.ncol();

  for (int i = 0; i < n; i++)
  {
    double sum = 0;

    for (int j = 0; j < m; j++)
    {
      sum += A(i, j) * x[j];
    }

    if (sum > b[i])
    {
      return false;
    }
  }

  return true;
}