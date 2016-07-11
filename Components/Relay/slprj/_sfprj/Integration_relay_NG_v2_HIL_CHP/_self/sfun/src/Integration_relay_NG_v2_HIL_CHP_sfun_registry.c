#include "Integration_relay_NG_v2_HIL_CHP_sfun.h"
#include "sfcdebug.h"

struct SfDebugInstanceStruct;
struct SfDebugInstanceStruct* sfGlobalDebugInstanceStruct = NULL;

#define PROCESS_MEX_SFUNCTION_CMD_LINE_CALL

unsigned int sf_process_check_sum_call( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{
  extern unsigned int sf_Integration_relay_NG_v2_HIL_CHP_process_check_sum_call(
    int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_breaker_lib_process_check_sum_call( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_relay_modbus_lib_process_check_sum_call( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_relay_ANSI_F25_lib_process_check_sum_call( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_relay_bkrCtrl_lib_process_check_sum_call( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_relay_ANSI_functions_lib_process_check_sum_call( int
    nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  if (sf_Integration_relay_NG_v2_HIL_CHP_process_check_sum_call(nlhs,plhs,nrhs,
       prhs))
    return 1;
  if (sf_breaker_lib_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_relay_modbus_lib_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_relay_ANSI_F25_lib_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_relay_bkrCtrl_lib_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_relay_ANSI_functions_lib_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  return 0;
}

unsigned int sf_process_autoinheritance_call( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{
  extern unsigned int sf_Integration_relay_NG_v2_HIL_CHP_autoinheritance_info
    ( int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_breaker_lib_autoinheritance_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_relay_modbus_lib_autoinheritance_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_relay_ANSI_F25_lib_autoinheritance_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_relay_bkrCtrl_lib_autoinheritance_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_relay_ANSI_functions_lib_autoinheritance_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 4) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "Integration_relay_NG_v2_HIL_CHP") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_Integration_relay_NG_v2_HIL_CHP_autoinheritance_info(nlhs,plhs,3,
      newRhs);
  }

  if (strcmp(machineName, "breaker_lib") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_breaker_lib_autoinheritance_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "relay_modbus_lib") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_relay_modbus_lib_autoinheritance_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "relay_ANSI_F25_lib") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_relay_ANSI_F25_lib_autoinheritance_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "relay_bkrCtrl_lib") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_relay_bkrCtrl_lib_autoinheritance_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "relay_ANSI_functions_lib") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_relay_ANSI_functions_lib_autoinheritance_info(nlhs,plhs,3,newRhs);
  }

  return 0;
}

unsigned int sf_process_get_third_party_uses_info_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  extern unsigned int sf_Integration_relay_NG_v2_HIL_CHP_third_party_uses_info
    ( int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_breaker_lib_third_party_uses_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_relay_modbus_lib_third_party_uses_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_relay_ANSI_F25_lib_third_party_uses_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_relay_bkrCtrl_lib_third_party_uses_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_relay_ANSI_functions_lib_third_party_uses_info( int
    nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 4) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;
  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "Integration_relay_NG_v2_HIL_CHP") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_Integration_relay_NG_v2_HIL_CHP_third_party_uses_info(nlhs,plhs,3,
      newRhs);
  }

  if (strcmp(machineName, "breaker_lib") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_breaker_lib_third_party_uses_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "relay_modbus_lib") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_relay_modbus_lib_third_party_uses_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "relay_ANSI_F25_lib") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_relay_ANSI_F25_lib_third_party_uses_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "relay_bkrCtrl_lib") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_relay_bkrCtrl_lib_third_party_uses_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "relay_ANSI_functions_lib") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_relay_ANSI_functions_lib_third_party_uses_info(nlhs,plhs,3,newRhs);
  }

  return 0;
}

unsigned int sf_process_get_eml_resolved_functions_info_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  extern unsigned int
    sf_Integration_relay_NG_v2_HIL_CHP_get_eml_resolved_functions_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_breaker_lib_get_eml_resolved_functions_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_relay_modbus_lib_get_eml_resolved_functions_info( int
    nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_relay_ANSI_F25_lib_get_eml_resolved_functions_info( int
    nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_relay_bkrCtrl_lib_get_eml_resolved_functions_info( int
    nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int
    sf_relay_ANSI_functions_lib_get_eml_resolved_functions_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 3) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;
  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "Integration_relay_NG_v2_HIL_CHP") == 0) {
    const mxArray *newRhs[2] = { NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    return sf_Integration_relay_NG_v2_HIL_CHP_get_eml_resolved_functions_info
      (nlhs,plhs,2,newRhs);
  }

  if (strcmp(machineName, "breaker_lib") == 0) {
    const mxArray *newRhs[2] = { NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    return sf_breaker_lib_get_eml_resolved_functions_info(nlhs,plhs,2,newRhs);
  }

  if (strcmp(machineName, "relay_modbus_lib") == 0) {
    const mxArray *newRhs[2] = { NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    return sf_relay_modbus_lib_get_eml_resolved_functions_info(nlhs,plhs,2,
      newRhs);
  }

  if (strcmp(machineName, "relay_ANSI_F25_lib") == 0) {
    const mxArray *newRhs[2] = { NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    return sf_relay_ANSI_F25_lib_get_eml_resolved_functions_info(nlhs,plhs,2,
      newRhs);
  }

  if (strcmp(machineName, "relay_bkrCtrl_lib") == 0) {
    const mxArray *newRhs[2] = { NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    return sf_relay_bkrCtrl_lib_get_eml_resolved_functions_info(nlhs,plhs,2,
      newRhs);
  }

  if (strcmp(machineName, "relay_ANSI_functions_lib") == 0) {
    const mxArray *newRhs[2] = { NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    return sf_relay_ANSI_functions_lib_get_eml_resolved_functions_info(nlhs,plhs,
      2,newRhs);
  }

  return 0;
}

unsigned int sf_mex_unlock_call( int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[] )
{
  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_mex_unlock"))
    return 0;
  while (mexIsLocked()) {
    mexUnlock();
  }

  return(1);
}

extern unsigned int sf_debug_api(struct SfDebugInstanceStruct* debugInstance,
  int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] );
static unsigned int sf_debug_api_wrapper( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{
  return sf_debug_api(sfGlobalDebugInstanceStruct, nlhs, plhs, nrhs, prhs);
}

static unsigned int ProcessMexSfunctionCmdLineCall(int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[])
{
  if (sf_debug_api_wrapper(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_mex_unlock_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_autoinheritance_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_get_third_party_uses_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_get_eml_resolved_functions_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  mexErrMsgTxt("Unsuccessful command.");
  return 0;
}

static unsigned int sfGlobalMdlStartCallCounts = 0;
unsigned int sf_machine_global_initializer_called(void)
{
  return(sfGlobalMdlStartCallCounts > 0);
}

extern unsigned int sf_Integration_relay_NG_v2_HIL_CHP_method_dispatcher
  (SimStruct *S, unsigned int chartFileNumber, const char* specsCksum, int_T
   method, void *data);
extern unsigned int sf_breaker_lib_method_dispatcher(SimStruct *S, unsigned int
  chartFileNumber, const char* specsCksum, int_T method, void *data);
extern unsigned int sf_relay_modbus_lib_method_dispatcher(SimStruct *S, unsigned
  int chartFileNumber, const char* specsCksum, int_T method, void *data);
extern unsigned int sf_relay_ANSI_F25_lib_method_dispatcher(SimStruct *S,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data);
extern unsigned int sf_relay_bkrCtrl_lib_method_dispatcher(SimStruct *S,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data);
extern unsigned int sf_relay_ANSI_functions_lib_method_dispatcher(SimStruct *S,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data);
unsigned int sf_machine_global_method_dispatcher(SimStruct *simstructPtr, const
  char *machineName, unsigned int chartFileNumber, const char* specsCksum, int_T
  method, void *data)
{
  if (!strcmp(machineName,"Integration_relay_NG_v2_HIL_CHP")) {
    return(sf_Integration_relay_NG_v2_HIL_CHP_method_dispatcher(simstructPtr,
            chartFileNumber,specsCksum,method,data));
  }

  if (!strcmp(machineName,"breaker_lib")) {
    return(sf_breaker_lib_method_dispatcher(simstructPtr,chartFileNumber,
            specsCksum,method,data));
  }

  if (!strcmp(machineName,"relay_modbus_lib")) {
    return(sf_relay_modbus_lib_method_dispatcher(simstructPtr,chartFileNumber,
            specsCksum,method,data));
  }

  if (!strcmp(machineName,"relay_ANSI_F25_lib")) {
    return(sf_relay_ANSI_F25_lib_method_dispatcher(simstructPtr,chartFileNumber,
            specsCksum,method,data));
  }

  if (!strcmp(machineName,"relay_bkrCtrl_lib")) {
    return(sf_relay_bkrCtrl_lib_method_dispatcher(simstructPtr,chartFileNumber,
            specsCksum,method,data));
  }

  if (!strcmp(machineName,"relay_ANSI_functions_lib")) {
    return(sf_relay_ANSI_functions_lib_method_dispatcher(simstructPtr,
            chartFileNumber,specsCksum,method,data));
  }

  return 0;
}

extern void Integration_relay_NG_v2_HIL_CHP_terminator(void);
extern void breaker_lib_terminator(void);
extern void relay_modbus_lib_terminator(void);
extern void relay_ANSI_F25_lib_terminator(void);
extern void relay_bkrCtrl_lib_terminator(void);
extern void relay_ANSI_functions_lib_terminator(void);
void sf_machine_global_terminator(void)
{
  sfGlobalMdlStartCallCounts--;
  if (sfGlobalMdlStartCallCounts == 0) {
    Integration_relay_NG_v2_HIL_CHP_terminator();
    breaker_lib_terminator();
    relay_modbus_lib_terminator();
    relay_ANSI_F25_lib_terminator();
    relay_bkrCtrl_lib_terminator();
    relay_ANSI_functions_lib_terminator();
    sf_debug_terminate(sfGlobalDebugInstanceStruct);
    sfGlobalDebugInstanceStruct = NULL;
  }

  return;
}

extern void Integration_relay_NG_v2_HIL_CHP_initializer(void);
extern void breaker_lib_initializer(void);
extern void relay_modbus_lib_initializer(void);
extern void relay_ANSI_F25_lib_initializer(void);
extern void relay_bkrCtrl_lib_initializer(void);
extern void relay_ANSI_functions_lib_initializer(void);
extern void Integration_relay_NG_v2_HIL_CHP_register_exported_symbols(SimStruct*
  S);
extern void breaker_lib_register_exported_symbols(SimStruct* S);
extern void relay_modbus_lib_register_exported_symbols(SimStruct* S);
extern void relay_ANSI_F25_lib_register_exported_symbols(SimStruct* S);
extern void relay_bkrCtrl_lib_register_exported_symbols(SimStruct* S);
extern void relay_ANSI_functions_lib_register_exported_symbols(SimStruct* S);
extern void Integration_relay_NG_v2_HIL_CHP_debug_initialize(struct
  SfDebugInstanceStruct*);
extern void breaker_lib_debug_initialize(struct SfDebugInstanceStruct*);
extern void relay_modbus_lib_debug_initialize(struct SfDebugInstanceStruct*);
extern void relay_ANSI_F25_lib_debug_initialize(struct SfDebugInstanceStruct*);
extern void relay_bkrCtrl_lib_debug_initialize(struct SfDebugInstanceStruct*);
extern void relay_ANSI_functions_lib_debug_initialize(struct
  SfDebugInstanceStruct*);
void sf_register_machine_exported_symbols(SimStruct* S)
{
  Integration_relay_NG_v2_HIL_CHP_register_exported_symbols(S);
  breaker_lib_register_exported_symbols(S);
  relay_modbus_lib_register_exported_symbols(S);
  relay_ANSI_F25_lib_register_exported_symbols(S);
  relay_bkrCtrl_lib_register_exported_symbols(S);
  relay_ANSI_functions_lib_register_exported_symbols(S);
}

bool callCustomFcn(char initFlag)
{
  return false;
}

void sf_machine_global_initializer(SimStruct* S)
{
  bool simModeIsRTWGen = sim_mode_is_rtw_gen(S);
  sfGlobalMdlStartCallCounts++;
  if (sfGlobalMdlStartCallCounts == 1) {
    if (simModeIsRTWGen) {
      sf_register_machine_exported_symbols(S);
    }

    sfGlobalDebugInstanceStruct = sf_debug_create_debug_instance_struct();
    if (!simModeIsRTWGen) {
      Integration_relay_NG_v2_HIL_CHP_debug_initialize
        (sfGlobalDebugInstanceStruct);
    }

    Integration_relay_NG_v2_HIL_CHP_initializer();
    if (!simModeIsRTWGen) {
      breaker_lib_debug_initialize(sfGlobalDebugInstanceStruct);
    }

    breaker_lib_initializer();
    if (!simModeIsRTWGen) {
      relay_modbus_lib_debug_initialize(sfGlobalDebugInstanceStruct);
    }

    relay_modbus_lib_initializer();
    if (!simModeIsRTWGen) {
      relay_ANSI_F25_lib_debug_initialize(sfGlobalDebugInstanceStruct);
    }

    relay_ANSI_F25_lib_initializer();
    if (!simModeIsRTWGen) {
      relay_bkrCtrl_lib_debug_initialize(sfGlobalDebugInstanceStruct);
    }

    relay_bkrCtrl_lib_initializer();
    if (!simModeIsRTWGen) {
      relay_ANSI_functions_lib_debug_initialize(sfGlobalDebugInstanceStruct);
    }

    relay_ANSI_functions_lib_initializer();
  }

  return;
}

#define PROCESS_MEX_SFUNCTION_EVERY_CALL

unsigned int ProcessMexSfunctionEveryCall(int_T nlhs, mxArray *plhs[], int_T
  nrhs, const mxArray *prhs[]);

#include "simulink.c"                  /* MEX-file interface mechanism */

static void sf_machine_load_sfunction_ptrs(SimStruct *S)
{
  ssSetmdlInitializeSampleTimes(S,__mdlInitializeSampleTimes);
  ssSetmdlInitializeConditions(S,__mdlInitializeConditions);
  ssSetmdlOutputs(S,__mdlOutputs);
  ssSetmdlTerminate(S,__mdlTerminate);
  ssSetmdlRTW(S,__mdlRTW);
  ssSetmdlSetWorkWidths(S,__mdlSetWorkWidths);

#if defined(MDL_HASSIMULATIONCONTEXTIO)

  ssSetmdlSimulationContextIO(S,__mdlSimulationContextIO);

#endif

#if defined(MDL_START)

  ssSetmdlStart(S,__mdlStart);

#endif

#if defined(RTW_GENERATED_ENABLE)

  ssSetRTWGeneratedEnable(S,__mdlEnable);

#endif

#if defined(RTW_GENERATED_DISABLE)

  ssSetRTWGeneratedDisable(S,__mdlDisable);

#endif

#if defined(MDL_ENABLE)

  ssSetmdlEnable(S,__mdlEnable);

#endif

#if defined(MDL_DISABLE)

  ssSetmdlDisable(S,__mdlDisable);

#endif

#if defined(MDL_SIM_STATUS_CHANGE)

  ssSetmdlSimStatusChange(S,__mdlSimStatusChange);

#endif

#if defined(MDL_EXT_MODE_EXEC)

  ssSetmdlExtModeExec(S,__mdlExtModeExec);

#endif

#if defined(MDL_UPDATE)

  ssSetmdlUpdate(S,__mdlUpdate);

#endif

#if defined(MDL_PROCESS_PARAMETERS)

  ssSetmdlProcessParameters(S,__mdlProcessParameters);

#endif

#if defined(MDL_ZERO_CROSSINGS)

  ssSetmdlZeroCrossings(S,__mdlZeroCrossings);

#endif

#if defined(MDL_DERIVATIVES)

  ssSetmdlDerivatives(S,__mdlDerivatives);

#endif

}

unsigned int ProcessMexSfunctionEveryCall(int_T nlhs, mxArray *plhs[], int_T
  nrhs, const mxArray *prhs[])
{
  if (nlhs < 0) {
    SimStruct *S = (SimStruct *)plhs[_LHS_SS];
    int_T flag = (int_T)(*(real_T*)mxGetPr(prhs[_RHS_FLAG]));
    if (flag == SS_CALL_MDL_SET_WORK_WIDTHS) {
      sf_machine_load_sfunction_ptrs(S);
    }
  }

  return 0;
}
