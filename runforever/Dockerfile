FROM gcc:latest
WORKDIR /app
COPY runforever.c /app
RUN gcc -o runforever runforever.c
CMD ["./runforever"]