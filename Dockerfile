# Start with Ubuntu base image
FROM ubuntu:lunar-20230314

# Update the local package cache
RUN apt-get update

# Install the Clang compiler
RUN apt-get install clang=1:15.0-56~exp2 -y

# Install CMake
RUN apt-get install cmake=3.25.1-1 -y

# Install LLVM
RUN apt-get install llvm -y
RUN apt-get install lcov -y

# Create new working directory for source files
WORKDIR /app

# Copy over source files
COPY . .

# Run CMake
#CMD cmake -S . -B build -DCODE_COVERAGE=ON && cmake --build build && cd build