# Beatrice
> DISCLAIMER: Work in progress...

Our robot prototype based in [LunoMath](https://github.com/1jari/LunoMath.git)...

## Building Instructions
### Prerequisites
- [Premake5](https://premake.github.io/) Building System.
- [LunoMath](https://github.com/1jari/LunoMath.git) Mathematical Simulator.

## Compiling
```sh
# For Windows/Visual Studio Build Tools:
$ premake5 vs2022
$ msbuild beatrice

# For GCC:
$ premake5 gmake
$ make
```