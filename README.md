# Generating Documentation

Welkarn uses Doxygen to generate documentation. Follow [Doxygen's](https://www.doxygen.nl/download.html) instructions to download Doxygen. Then navigate to the `docs` directory and run the command `doxygen Doxyfile` in a terminal to generate a HTML and Latex version of the documentation.

# Building & Running

To start with, download [Docker](https://www.docker.com/products/docker-desktop/) and run it to ensure the Docker Engine is running in the background. After this, go to a terminal and run the command `docker build -t welkarn . && docker run -it --rm welkarn` to build and start a Docker container for Welkarn.

Inside the Docker container, run the command `cmake -S . -B build && cmake --build build` to build the project.

To run Welkran, go into the build directory via `cd build` and use the command `./Welkran`.

# Running Tests

Welkarn uses Google Test for simple unit tests. The easiest way to run the tests is inside the Docker container. Follow the instructions for building to build the project and start a Docker container.

Once inside the Docker container, go into the build directory via `cd build` and run either `ctest` or `./WelkarnTester`.