# develop the script

perf_data <- read.table('bob', skip=3)

busy <- 100-perf_data[,'V12']

# plot(busy, type='b')
# plot(busy, type='b', ylim=c(0, 100))

print('Service Demand is:')
print(calcSvcDemand(900, busy))

calcSvcDemand <- function(X_0, U) {
  avg_u <- mean(U)  
  return(avg_u / X_0)
}



