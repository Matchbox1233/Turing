library(matlab)

    stp <- function(x)
    {
        primes = primes(x)
        diff = primes[2:length(primes)]-primes[1:length(primes)-1]
        idx = which(diff==2)
        firstnumber = primes[idx]
        secondnumber = primes[idx]+2
        rec= 1/t1primes+1/t2primes
        return(sum(rec))
    }

    x=seq(13, 1000000, by=10000)
    y=sapply(x, FUN = stp)
    plot(x,y,type="b")