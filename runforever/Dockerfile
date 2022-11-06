FROM gcc:latest
COPY runforever.c /usr/src/mimik
WORKDIR /usr/src/mimik
RUN gcc -o runforever runforever.c
CMD ["./runforever"]