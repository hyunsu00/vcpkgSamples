# CMakeList.txt

cmake_minimum_required(VERSION 3.22)

# 프로젝트 이름 지정
project("minizipTester")

# 빌드 상세 과정을 모두 출력하는 Makefile을 생성
set(CMAKE_VERBOSE_MAKEFILE true)

# minizip 패키지 찾기(vcpkg)
find_package(unofficial-minizip CONFIG REQUIRED)

# 실행파일
add_executable(
	${PROJECT_NAME} 
	"${CMAKE_CURRENT_SOURCE_DIR}/miniunz.c"
	"${CMAKE_CURRENT_SOURCE_DIR}/minizipTester.c"
)

# minizip 라이브러리 링크(vcpkg)
target_link_libraries(${PROJECT_NAME} PRIVATE unofficial::minizip::minizip)

if(${CMAKE_SYSTEM_NAME} MATCHES "Emscripten")
	# node.js와 함께 작동시 모든 파일 시스템에 액세스
	set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "-sNODERAWFS=1")
endif()