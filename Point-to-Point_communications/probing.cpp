void probing_process(int &int_sum, float &float_sum) {
    MPI_Status status;
  
  // 1- Probe the incoming message
    MPI_Probe(MPI_ANY_SOURCE, MPI_ANY_TAG, MPI_COMM_WORLD, &status);

  // 2- Get the tag and the source
    int tag = status.MPI_TAG;
    int source = status.MPI_SOURCE;

  // Printing the message
    std::cout << "Received a message from process " << source << " with tag " << tag << std::endl;
 /*===============================================
 Nao consegui fazer essa parte do codigo rodar :(
 ================================================*/
  /* 3- Add to int_sum or float_sum depending on the tag of the message
    if (tag == 0) {
        MPI_Recv(&int_sum, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
    }else {
        MPI_Recv(&float_sum, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
    }*/
}
