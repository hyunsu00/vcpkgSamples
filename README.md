# vcpkgSamples

## git 명령어
```bash
# vcpkg 서브모듈 추가
$ git submodule add https://github.com/microsoft/vcpkg sdks/vcpkg
$ git submodule add https://github.com/emscripten-core/emsdk sdks/emsdk

# 서브모듈 업데이트
$ git submodule update --init --recursive
```

## vcpkg 
```bash
# vcpkg 개요
# https://github.com/microsoft/vcpkg/blob/master/README_ko_KR.md
# vcpkg 설명서
# https://learn.microsoft.com/ko-kr/vcpkg/
# CMake 통합
# https://learn.microsoft.com/ko-kr/vcpkg/users/buildsystems/cmake-integration

# 처음 git clone 시작시 실행
$ cd sdks/    
$ sudo apt-get install curl zip unzip tar
$ ./vcpkg/bootstrap-vcpkg.sh
$ ./vcpkg/vcpkg install minizip >> ./../logs/minizip.txt
$ ./vcpkg/vcpkg install minizip:wasm32-emscripten --head >> ./../logs/minizip_wasm-emscripten.txt
```

## cmake 
```bash
# CMake Tools 확장
# https://github.com/microsoft/vscode-cmake-tools/blob/main/docs/README.md
# CMake kits (cmake-tools-kits.json, cmake-kits.json)
# https://github.com/microsoft/vscode-cmake-tools/blob/main/docs/kits.md
# CMake 도구 설정(setting.json)
# https://github.com/microsoft/vscode-cmake-tools/blob/main/docs/cmake-settings.md
```

## Emscripten 
```bash
# https://thatonegamedev.com/cpp/programming-a-c-game-for-the-web-emscripten/
# https://dev.to/baduit/port-it-to-the-web-with-web-assembly-and-emscripten-5c7k
```
