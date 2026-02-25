library(Rcpp)
sourceCpp("polytope.cpp")

A <- matrix(c(1,0,0,1,-1,0,0,-1), nrow=4, byrow=TRUE)
b <- c(1,1,0,0)

x1 <- c(0.5, 0.5)
x2 <- c(2, 2)

isInsidePolytope(A, b, x1)  # TRUE
isInsidePolytope(A, b, x2)  # FALSE