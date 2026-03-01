# rcpp_polytope_demo

### GSoC 2026 Proof-of-Concept | GeomScale

This repository demonstrates the integration of **Sparse Matrix Representations** into Rcpp for high-dimensional H-Polytope constraint checking. This is a foundational step for the GSoC 2026 project: _Supporting Sparse Matrix Representation for H-Polytopes in Rvolesti_.

## Key Features

- **Zero-Copy Memory Mapping:** Uses `Eigen::MappedSparseMatrix` to interface with R's `dgCMatrix` without overhead.
- **Optimized Constraint Checking:** Implements $Ax \le b$ checks specifically for sparse $A$ matrices, reducing complexity in high dimensions.
- **R Integration:** Seamlessly bridges R's `Matrix` package with C++ backend via `RcppEigen`.

## Installation

```R
# install.packages("devtools")
devtools::install_github("aswinharikrishnan/rcpp_polytope_demo")
```
