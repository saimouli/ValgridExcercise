# C++ Boilerplate
[![Build Status](https://travis-ci.org/dpiet/cpp-boilerplate.svg?branch=master)](https://travis-ci.org/dpiet/cpp-boilerplate)
[![Coverage Status](https://coveralls.io/repos/github/dpiet/cpp-boilerplate/badge.svg?branch=master)](https://coveralls.io/github/dpiet/cpp-boilerplate?branch=master)
---

## Overview

Pratice valgrind exercise 

[Initial valgrind result](https://github.com/saimouli/ValgridExcercise/blob/valgrind_exercise/results/Initial_valgrid_test.txt)

[Final valgrind result](https://github.com/saimouli/ValgridExcercise/blob/valgrind_exercise/results/final_valgrid_test.txt)

[Memory profile](https://github.com/saimouli/ValgridExcercise/blob/valgrind_exercise/results/memory_profile.png)

## Dependencies
```
sudo apt-get install valgrind
```
```
sudo apt-get install kcachegrind
```
more about valgrind and kcachegrind can be found in this [website] (http://maintainablecode.logdown.com/posts/245425-valgrind-is-not-a-leak-checker)

## Standard install via command-line
```
git clone --recursive https://github.com/dpiet/cpp-boilerplate
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```
