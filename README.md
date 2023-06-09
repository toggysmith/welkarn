<h1 align="center">Welkarn</h1>
<p align="center">Modern C++ project template using Docker, CMake, Doxygen, Clang Format, Google Test, and LLVM Sanitizers.</p>

# Overview

Welkarn, a modern C++ project template, is not designed to be the best template available on the Internet. Instead, it is a personal project that I am developing to educate myself about the C++ ecosystem and to create a template that I can use for my own personal projects. While I have taken care to make it useful and functional, it is not intended to be a one-size-fits-all solution for all C++ projects. Rather, it serves as a starting point for anyone who wants to create a new C++ project and needs a basic template to get started. As with any open-source project, Welkarn is a work in progress, and I am constantly improving it based on feedback from the community and my own learning experiences.

# Generating Documentation

Welkarn uses Doxygen to generate documentation. Follow [Doxygen's](https://www.doxygen.nl/download.html) instructions to download Doxygen. Then navigate to the `docs` directory and run the command `doxygen Doxyfile` in a terminal to generate a HTML and Latex version of the documentation.

# Building & Running

To start with, download [Docker](https://www.docker.com/products/docker-desktop/) and run it to ensure the Docker Engine is running in the background. After this, go to a terminal and run the command `docker build -t welkarn . && docker run -it --rm welkarn` to build and start a Docker container for Welkarn.

Inside the Docker container, run the command `cmake -S . -B build && cmake --build build` to build the project.

To run Welkarn, go into the build directory via `cd build` and use the command `./Welkarn`.

# Running Tests

Welkarn uses Google Test for simple unit tests. The easiest way to run the tests is inside the Docker container. Follow the instructions for building to build the project and start a Docker container.

Once inside the Docker container, go into the build directory via `cd build` and run either `ctest` or `./WelkarnTester`.

# Checking Test Coverage

To check coverage, go inside the Docker container and enter the build directory via `cd build`.

Then run `make ccov-WelkarnTester`. A HTML version of the coverage report should be generated inside the ccov directory.

If you want to open this coverage outside of the Docker container, you can copy the ccov directory from the Docker
container to your machine. To do this, you first need to get the ID of the Docker container. When you have been running
commands previously, you should have seen that the user was `root@[ID]`, e.g. `root@879a4b6eba95`. Keep a note of the
ID value.

Ensure the Docker container is still running inside one terminal instance and then open a new terminal instance. In the new
terminal instance, run the command `docker cp [ID]:/app/build/ccov [DIR]/ccov` where DIR is the directory on your machine you
want to copy the ccov directory to.

You can then open up the index.html file in the ccov/WelkarnTester directory to see the coverage report.

![image](https://user-images.githubusercontent.com/61121030/231470401-1acd8660-5c89-4695-9258-663441612ca6.png)
*An example of a generated coverage report.*