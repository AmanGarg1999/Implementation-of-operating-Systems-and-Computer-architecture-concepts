# Job Scheduling Algorithms

## What is CPU Scheduling?

CPU scheduling is a process which allows one process to use the CPU while the execution of another process is on hold(in waiting state) due to unavailability of any resource like I/O etc, thereby making full use of CPU. The aim of CPU scheduling is to make the system efficient, fast and fair.

Whenever the CPU becomes idle, the operating system must select one of the processes in the ready queue to be executed. The selection process is carried out by the short-term scheduler (or CPU scheduler). The scheduler selects from among the processes in memory that are ready to execute, and allocates the CPU to one of them

## Types of CPU Scheduling

CPU scheduling decisions may take place under the following four circumstances:

* When a process switches from the running state to the waiting state(for I/O request or invocation of wait for the termination of one of the child processes).
* When a process switches from the running state to the ready state (for example, when an interrupt occurs).*When a process switches from the waiting state to the ready state(for example, completion of I/O).
* When a process terminates.

In circumstances 1 and 4, there is no choice in terms of scheduling. A new process(if one exists in the ready queue) must be selected for execution. There is a choice, however in circumstances 2 and 3.

When Scheduling takes place only under circumstances 1 and 4, we say the scheduling scheme is non-preemptive; otherwise the scheduling scheme is preemptive.

## Non-Preemptive Scheduling

Under non-preemptive scheduling, once the CPU has been allocated to a process, the process keeps the CPU until it releases the CPU either by terminating or by switching to the waiting state.

This scheduling method is used by the Microsoft Windows 3.1 and by the Apple Macintosh operating systems.

It is the only method that can be used on certain hardware platforms, because It does not require the special hardware(for example: a timer) needed for preemptive scheduling.

## Preemptive Scheduling

In this type of Scheduling, the tasks are usually assigned with priorities. At times it is necessary to run a certain task that has a higher priority before another task although it is running. Therefore, the running task is interrupted for some time and resumed later when the priority task has finished its execution. 

## Scheduling Algorithms

    1. First Come First Serve(FCFS) Scheduling
    2. Shortest-Job-First(SJF) Scheduling
        a. Non-Preemptive
        b. Preemptive
    3. Priority Scheduling
    4. Multilevel Queue Scheduling
