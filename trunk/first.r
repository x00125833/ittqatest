# print ('my first R script')

#load the file raw_stats
#ignoring header data
perf_data <- read.table('raw_stats.dat', TRUE)

plot(100-perf_data[,'X.idle'], type='b', xlab='Time in Seconds',ylab='% utilization (U_i)')
u_i <- mean(100-perf_data[,'X.idle'])
d_i <- u_i / 94

