library(Matrix)
library(rcppPolytopeDemo)

# 1. Create a large, sparse 100x100 Identity Matrix
# This simulates a high-dimensional polytope where most coefficients are 0
A_sparse <- as(diag(100), "dgCMatrix")

# 2. Define the boundary (b) and the point to test (x)
b <- rep(1, 100)
x <- rep(0.5, 100)

# 3. Call the new sparse-optimized function
is_inside <- check_constraints_sparse(A_sparse, x, b)

print(paste("Is point inside?", is_inside))
