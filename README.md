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
# 처음 git clone 시작시 실행
$ cd sdks/    
$ ./vcpkg/bootstrap-vcpkg.sh
$ ./vcpkg/vcpkg install minizip >> ./../logs/minizip.txt
```
