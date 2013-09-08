#ifndef DEBUG_H_
#define DEBUG_H_

#ifdef NDEBUG      // ��꡼��

#define ASSERT(b)

#else              // �ǥХå�

#define ASSERT(b) Debug::Assert((b), __FILE__, __LINE__)
namespace Debug {
	void Assert(bool b, const char* file, int line);
}

#endif            // #ifndef NDEBUG

#endif            // #ifndef DEBUG_H_
