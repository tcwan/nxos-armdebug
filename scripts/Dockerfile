FROM ubuntu:18.04
LABEL maintainer="TC Wan <tcwan@usm.my>"
LABEL Description="Image for building and debugging arm-embedded projects from git, adapted from Dockerfile created by Niklas Hauser <niklas.hauser@rwth-aachen.de>\nSource: https://hub.docker.com/r/stronglytyped/arm-none-eabi-gcc/"
WORKDIR /work

ADD . /work

# Install any needed packages specified in requirements.txt
RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y \
# Development files
      build-essential \
      python \
      python-pil \
      doxygen \
      git \
      scons \
      bzip2 \
      wget && \
    apt-get clean
RUN wget -qO- https://developer.arm.com/-/media/Files/downloads/gnu-rm/9-2019q4/gcc-arm-none-eabi-9-2019-q4-major-x86_64-linux.tar.bz2 | tar -xj

ENV PATH "/work/gcc-arm-none-eabi-9-2019-q4-major/bin:$PATH"

