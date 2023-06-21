# CMakeList.txt

cmake_minimum_required(VERSION 3.22)

# 프로젝트 이름 지정
project("minizipTester")

# 빌드 상세 과정을 모두 출력하는 Makefile을 생성
set(CMAKE_VERBOSE_MAKEFILE true)

find_package(unofficial-minizip CONFIG REQUIRED)

# 실행파일
add_executable(
	${PROJECT_NAME} 
	"${CMAKE_CURRENT_SOURCE_DIR}/miniunz.c"
	"${CMAKE_CURRENT_SOURCE_DIR}/minizipTester.c"
)

target_link_libraries(${PROJECT_NAME} PRIVATE unofficial::minizip::minizip)