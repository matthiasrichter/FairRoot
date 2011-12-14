#ifndef FAIRDBCONNECTIONMAINTAINER
#define FAIRDBCONNECTIONMAINTAINER


class FairDbMultConnector;

class FairDbConnectionMaintainer

{

  public:

    FairDbConnectionMaintainer(FairDbMultConnector* cascader = 0);
    virtual ~FairDbConnectionMaintainer();

// Data members

  private:


/// May be null if made by (useless) default ctor.
    FairDbMultConnector* fCascader;

    ClassDef(FairDbConnectionMaintainer,0) // Object to hold open connections

};


#endif // FAIRDBCONNECTIONMAINTAINER
