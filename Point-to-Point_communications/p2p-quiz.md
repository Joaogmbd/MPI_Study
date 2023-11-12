## What is the default communicator that encapsulate all processes ?
A: MPI_COMM_WORLD

## Which of these situations is/are a race condition ?
A: When the sending process modifies its buffer before the receiving process has read from it.

## What is a deadlock ?
A: When multiple processes are waiting for each-other without being able to continue

## What are the four modes of communication ?
A: Standard, buffered, ready and asynchronous

## The buffered mode is fundamentally similar to a non-blocking send
A: True

## What can we use probing for ?
A: To know if a message is waiting to be delivered to a process <br>
A: TO know the tag of an incoming message <br>
A: To know the ID of the process sending a message <br>
A: TO know the numbers of elements in an incoming message

## In non-blocking communications, which function must necessarily be called at some point after a receive or a send ?
A: MPI_Wait

## What command should be used to synchronise all the processes on a communicator ?
A: MPI_Barrier