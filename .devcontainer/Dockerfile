FROM mcr.microsoft.com/vscode/devcontainers/base:ubuntu-20.04

 RUN \
 # bring in latest cmake
 sudo wget -qO /etc/apt/trusted.gpg.d/kitware-key.asc https://apt.kitware.com/keys/kitware-archive-latest.asc \ 
 && echo "deb https://apt.kitware.com/ubuntu/ focal main" | sudo tee /etc/apt/sources.list.d/kitware.list \
 && sudo apt-get update \
 # need that to get add-apt-repository
 && sudo apt-get install -y software-properties-common \ 
 && sudo add-apt-repository -y ppa:system76/pop \
 && sudo apt-get update \
 && sudo apt-get install -y build-essential cmake gdb ninja-build libgtest-dev wget curl \
 && sudo rm -rf /var/lib/apt/lists/*
 
 RUN \
 # bring in latest clang toolchain
 wget https://apt.llvm.org/llvm.sh  \
 && sudo chmod +x llvm.sh \
 && sudo ./llvm.sh 16 all \
 && sudo rm llvm.sh
 