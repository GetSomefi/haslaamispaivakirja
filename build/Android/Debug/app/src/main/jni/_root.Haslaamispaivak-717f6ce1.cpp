// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-717f6ce1.h>
#include <_root.ListItem2.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Haslaamispaivakirja_ListItem2_TheValue_Property :258
// {
static void Haslaamispaivakirja_ListItem2_TheValue_Property_build(uType* type)
{
    ::TYPES[0] = ::g::ListItem2_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*ListItem2*/], offsetof(Haslaamispaivakirja_ListItem2_TheValue_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Haslaamispaivakirja_ListItem2_TheValue_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_ListItem2_TheValue_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Haslaamispaivakirja_ListItem2_TheValue_Property", options);
    type->fp_build_ = Haslaamispaivakirja_ListItem2_TheValue_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Haslaamispaivakirja_ListItem2_TheValue_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Haslaamispaivakirja_ListItem2_TheValue_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Haslaamispaivakirja_ListItem2_TheValue_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_ListItem2_TheValue_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :263
void Haslaamispaivakirja_ListItem2_TheValue_Property__Get1_fn(Haslaamispaivakirja_ListItem2_TheValue_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::ListItem2*>(obj, ::TYPES[0/*ListItem2*/]))->TheValue(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :262
void Haslaamispaivakirja_ListItem2_TheValue_Property__get_Object_fn(Haslaamispaivakirja_ListItem2_TheValue_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :264
void Haslaamispaivakirja_ListItem2_TheValue_Property__Set1_fn(Haslaamispaivakirja_ListItem2_TheValue_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::ListItem2*>(obj, ::TYPES[0/*ListItem2*/]))->SetTheValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :265
void Haslaamispaivakirja_ListItem2_TheValue_Property__get_SupportsOriginSetter_fn(Haslaamispaivakirja_ListItem2_TheValue_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

} // ::g
