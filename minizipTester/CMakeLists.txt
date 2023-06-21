# CMakeList.txt

# 프로젝트 이름 지정
PROJECT ("minizipTester")

# 빌드 상세 과정을 모두 출력하는 Makefile을 생성
SET(CMAKE_VERBOSE_MAKEFILE true)

# LINUX C++ 11 사용
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# 실행파일
ADD_EXECUTABLE(
	${PROJECT_NAME} 
	"${CMAKE_CURRENT_SOURCE_DIR}/minizipTester.cpp"
)
