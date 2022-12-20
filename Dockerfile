FROM gcc:4.9 as compiler
COPY Fibo.c .
RUN gcc -o fibo -static Fibo.c

#FROM alpine:latest
#COPY --from=0 /fibo .

#CMD ["size fibo"]
#CMD ./fibo
#CMD ["./fibo"]
FROM scratch

COPY --from=compiler fibo /
ENTRYPOINT ["/fibo"]
