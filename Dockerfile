FROM alpine:latest
RUN apk add --no-cache g++ git
WORKDIR /app
RUN git clone https://github.com/vvs9896/cpu_load.git .
RUN g++ -o cpu_load test.cpp
CMD ["./cpu_load"]