{$IFNDEF Me_INC}
{$DEFINE Me_INC}
{ General Compiler Directives and Compiler Versions Setting }

{------------------------------------------------------------------------------}
{ Please change this to suit your needs                                        }
{------------------------------------------------------------------------------}
{.$define Debug}
{.$DEFINE Debug_WriteToConsole_Support}
{.$DEFINE PUREPASCAL}
{$DEFINE INJECT_DLL_SUPPORT} //can inject to DLL or run-time package.
{$DEFINE MeRTTI_SUPPORT}
{$DEFINE MeRTTI_EXT_SUPPORT} //the extension param type name info etc
//this will make all inptercepted procedure or static-method to support the reentrant.
//but it grow the injector size to 64 bytes.
{$DEFINE STATIC_METHOD_SCRAMBLING_CODE_SUPPORT}
{.$DEFINE MeDynamicMemory_HoldMem_SUPPORT}

{.$DEFINE YieldClass_Supports} //use the delphi class type instead.
{$DEFINE THREADSAFE_SUPPORT}
{$DEFINE NamedThread}

//-----------------MeRegExpr Compiler Options---------------------
{.$DEFINE UniCode_RegExpr} // Unicode support
{.$DEFINE CapturingGroup_RegExpr} //Comments for speedup(u can use the named SubExpr to capture what u want)
{$DEFINE SubExprName_RegExpr}
{$DEFINE SplitMethod_RegExpr}
{$DEFINE PCodeDump_RegExpr} // p-code dumping (see Dump method)
{$DEFINE ComplexBraces_RegExpr} // support braces in complex cases

{Include Common setting File}
{$I Setting.inc}


{***************** These compiler settings shouldn't be changed ***************}
{$IFDEF BORLAND}
  //the self parameter bug for the delphi class method of the Object type
  {$DEFINE Delphi_ObjectTypeClassMethod_BUG}
  //the byteBool, WordBool, LongBool typeInfo bug: MinValue, MaxValue is wrong.
  {$DEFINE Delphi_BoolTypeInfo_BUG} //For D10 below
{$ENDIF}

{$ENDIF ~Me_INC}