(void)argc;
(void)argv;
#define FAKE_STDIN(name) freopen(name, "r", stdin)
#define FAKE_ARGS(...)               \
    char *argv_[] = { __VA_ARGS__ }; \
    int argc_ = sizeof(argv_) / sizeof(argv_[0]);
#define argc argc_
#define argv argv_

/**
Add -DFAKE to gcc args.

Use like this:

int main(int argc, char *argv[])
{
#ifdef FAKE
#include ".vscode/fake.c"
    FAKE_STDIN("../something.txt");
    FAKE_ARGS("", "arg1", "arg2")
#endif

*/