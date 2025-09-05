
// 기본 출력: 단일 값
template <typename T>
void append_to_stream(std::ostringstream& oss, T&& value)
{
    oss << std::forward<T>(value);
}

// 재귀적으로 여러 인자를 처리
template <typename T, typename... Args>
void append_to_stream(std::ostringstream& oss, T&& first, Args&&... rest)
{
    oss << std::forward<T>(first) << ' '; // 값 사이에 공백 추가
    append_to_stream(oss, std::forward<Args>(rest)...);
}

// Log 함수
template <typename... Args>
void Log(Args&&... args)
{
    std::ostringstream oss;
    append_to_stream(oss, std::forward<Args>(args)...);
    std::cout << oss.str() << std::endl;
}
