#ifndef SIGNALS_H
#define SIGNAL_H
#include <signal.h>
#include <stdio.h>
int handle_signal(void);
void (*current_handler_signal(void))(int);
int handle_sigaction(void);
void (*current_handler_sigaction(void))(int);
int trace_signal_sender(void);
int pid_exist(pid_t pid);
#endif
