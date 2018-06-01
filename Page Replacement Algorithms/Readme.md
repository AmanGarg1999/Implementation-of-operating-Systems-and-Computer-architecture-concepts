# Page Replacement Algorithms

## What is Paging?
Virtual memory is the lifeline of modern computer operating systems (OS). An OS makes use of a process called paging for virtual memory management (VMM). Paging is a process of reading data from, and writing data to the secondary storage. Whenever a process refers to a page that is not present in memory, a page fault occurs. Subsequently, the OS replaces one of the existing pages with the referred page. Page replacement algorithms are an important part of virtual memory management and it helps the OS to decide which memory page can be moved out making space for the currently needed page.

However, the ultimate objective of all page replacement algorithms is to reduce the number of page faults. A page fault is a computer hardware raised interrupt or an exception when a running program accesses a memory page that is not currently mapped into the virtual address space of the program. 

## Types of Page Replacement Algorithms

There are various page replacement algorithms. Each algorithm has a different method by which the pages can be replaced.

    1. Optimal Page Replacement algorithm → 
    
    this algorithms replaces the page which will not be referred for so long in future. Although it can not be practically implementable but it can be used as a benchmark. Other algorithms are compared to this in terms of optimality.
    
    2. Least recent used (LRU) page replacement algorithm → 
    
    this algorithm replaces the page which has not been referred for a long time. This algorithm is just opposite to the optimal page replacement algorithm. In this, we look at the past instead of staring at future.
    
    3. FIFO →
    
    in this algorithm, a queue is maintained. The page which is assigned the frame first will be replaced first. In other words, the page which resides at the rare end of the queue will be replaced on the every page fault.
