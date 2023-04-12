#pragma once
#include "Process.h"
#include "LinkedList.h"
#include"Node.h"
#include"LinkedQueue.h"
#include"Queue.h"
class Processor
{
private:
	Process* Run;
	LinkedQueue<Process>RDY; //if it's empty, processor is idle    getter?
	int ID; //setter and getter?
	bool SchedulingState; //idle is 0 and busy is 1
	//int TotalRurnAroundTime;//total time the processor is working till it'
	int ProcessorBusyTime;//total time the processor is actually busy
	float PLoad;
	float PUtil;
	int FinishTime; //same as turnaround time?
	//expected finish time?document page 6
public:
	Processor();
	virtual void SchedulingAlgo() = 0;
	virtual void EnqueueReady(Process p); //same as add process  NOT pure virtual it's the same implementation in all?
	void setSchedulingState(bool u); //sets the processor running state
	bool getSchedulingState(); //returns the processor's running state
	int getFinishTime(); //allowed?
	//virtual void DeleteProcess(Process p) = 0; //deletes a process after it moves it to termination or BLK ???
	//do i have a copy of the process to delete it?
	//Process* getRun(); //gets the process that's running
	
};

