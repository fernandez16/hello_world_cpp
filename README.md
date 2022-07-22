# My first C++ program

- Practice exercise. The program has been configured with differente makefiles in order to have different compilation configurations, one for debugging purposes and another for release ones, each configuration with different output folders for better organization. 

- A task.json has been added to run the makefiles inside VSCode, it will run the commands through shell. A launch.json file has also been added to configure the launch settings for debugging purposes in VSCode.

## How to compile through command line

- To compile a debug version
> make

- To compile a release version
> make -C Release

## Dependencies

- Compiled with MinGW GCC

- make to run the makefiles