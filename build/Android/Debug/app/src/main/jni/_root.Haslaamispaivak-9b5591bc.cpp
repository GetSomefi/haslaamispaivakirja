// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-9b5591bc.h>
#include <basic.TextBoxFakeDropDown.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property :568
// {
static void Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property_build(uType* type)
{
    ::TYPES[0] = ::g::basic::TextBoxFakeDropDown_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*basic.TextBoxFakeDropDown*/], offsetof(Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property", options);
    type->fp_build_ = Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property(basic.TextBoxFakeDropDown obj, Uno.UX.Selector name) :571
void Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property__ctor_3_fn(Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property* __this, ::g::basic::TextBoxFakeDropDown* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :573
void Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property__Get1_fn(Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::basic::TextBoxFakeDropDown*>(obj, ::TYPES[0/*basic.TextBoxFakeDropDown*/]))->Send(), void();
}

// public Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property New(basic.TextBoxFakeDropDown obj, Uno.UX.Selector name) :571
void Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property__New1_fn(::g::basic::TextBoxFakeDropDown* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property** __retval)
{
    *__retval = Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :572
void Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property__get_Object_fn(Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :574
void Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property__Set1_fn(Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::basic::TextBoxFakeDropDown*>(obj, ::TYPES[0/*basic.TextBoxFakeDropDown*/]))->SetSend(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :575
void Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property__get_SupportsOriginSetter_fn(Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property(basic.TextBoxFakeDropDown obj, Uno.UX.Selector name) [instance] :571
void Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property::ctor_3(::g::basic::TextBoxFakeDropDown* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property New(basic.TextBoxFakeDropDown obj, Uno.UX.Selector name) [static] :571
Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property* Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property::New1(::g::basic::TextBoxFakeDropDown* obj, ::g::Uno::UX::Selector name)
{
    Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property* obj1 = (Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property*)uNew(Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
