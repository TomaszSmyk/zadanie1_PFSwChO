FROM gcc:4.9 as compiler
COPY Fibo.c .
RUN gcc -o fibo -static Fibo.c

FROM scratch
COPY --from=compiler fibo /
ENTRYPOINT ["/fibo"]
