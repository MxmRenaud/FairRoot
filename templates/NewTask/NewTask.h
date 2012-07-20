#ifndef NEWTASK_H
#define NEWTASK_H

#include "FairTask.h"

class TClonesArray;

class NewTask : public FairTask
{
  public:

    /** Default constructor **/
    NewTask();

    /** Constructor with parameters (Optional)
    //  NewTask(Int_t verbose);


    /** Destructor **/
    ~NewTask();


    /** Initiliazation of task at the beginning of a run **/
    virtual InitStatus Init();

    /** ReInitiliazation of task when the runID changes **/
    virtual InitStatus ReInit();


    /** Executed for each event. **/
    virtual void Exec(Option_t* opt);

    /** Load the parameter container from the runtime database **/
    virtual void SetParContainers();

    /** Finish task called at the end of each event **/
    virtual void Finish();

  private:

    /** Input array from previous already existing data level **/
    //  TClonesArray* <InputDataLevel>;

    /** Output array to  new data level**/
    //  TClonesArray* <OutputDataLevel>;

    NewTask(const NewTask&);
    NewTask operator=(const NewTask&);

    ClassDef(NewTask,1);
};

#endif