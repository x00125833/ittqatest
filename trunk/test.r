perf_data <- read.table('raw_stats.dat',TRUE)
plot(100-(perf_data[,'X.idle']), type='b', xlab='time/sec', ylab='utilization')
u_i <- mean(100-perf_data[,'X.idle'])
X_0 <- 94
cat ('u_i is ', u_i, '\n')
cat ('service demand is: ',  u_i/X_0, ' seconds per transaction\n')
abline(u_i,0,lty=2,col="blue")
