// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/textDropDown_toimimaton.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.textDropDown_to-5f30e463.h>
#include <Fuse.Node.h>
#include <Fuse.Selection.Selection.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class textDropDown_toimimaton.Template :35
// {
// static Template() :44
static void textDropDown_toimimaton__Template__cctor__fn(uType* __type)
{
}

static void textDropDown_toimimaton__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Components/textDropDown_toimimaton.ux");
    type->SetFields(2);
}

::g::Uno::UX::Template_type* textDropDown_toimimaton__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(textDropDown_toimimaton__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("textDropDown_toimimaton.Template", options);
    type->fp_build_ = textDropDown_toimimaton__Template_build;
    type->fp_cctor_ = textDropDown_toimimaton__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))textDropDown_toimimaton__Template__New1_fn;
    return type;
}

// public override sealed object New() :47
void textDropDown_toimimaton__Template__New1_fn(textDropDown_toimimaton__Template* __this, uObject** __retval)
{
    ::g::Fuse::Selection::Selection* __self1 = ::g::Fuse::Selection::Selection::New2();
    __self1->SourceLineNumber(40);
    __self1->SourceFileName(::STRINGS[0/*"Components/...*/]);
    return *__retval = __self1, void();
}
// }

} // ::g
