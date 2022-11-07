The purpose of this project is to demonstrate the using the runforever source code in two ways.

The first way is to compile and run the code as a standalone executable file.


The second way it to create a Linux container image and then a Linux container that's running the runforever as an isolated process.

# Compiling and running as a executable

Make sure that your local computing environment has a C compiler (`gcc`) installed and then run in a terminal window.

```
gcc runforever.c -o runforever
```
You'll get output similar to the following:

```
TO BE PROVIDED
```

# Building and running runforever as Linux container

`Step 1:` First build the container image using the container manifest file, `Dockerfile`.

```
docker build -t runforever_image .
```

`Step 2` Take a look at the current list of container images installed on the local machine

```
docker images
```
You'll get output similar to the following:

```
TO BE PROVIDED
```

`Step 3` Run the container using the container image `runforever_image` in the background.

```
docker run -d --name runforever_app runforever_image
```

You'll get output similar to the following:

```
TO BE PROVIDED
```


`Step 4` Get the statistics about the container `runforever_app`

```
docker stats --no-stream runforever_app
```

You'll get output similar to the following:

```
TO BE PROVIDED
```