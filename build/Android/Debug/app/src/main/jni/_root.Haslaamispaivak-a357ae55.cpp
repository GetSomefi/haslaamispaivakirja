// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-a357ae55.h>
#include <basic.TextBoxAction.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Haslaamispaivakirja_basicTextBoxAction_DataKey_Property :605
// {
static void Haslaamispaivakirja_basicTextBoxAction_DataKey_Property_build(uType* type)
{
    ::TYPES[0] = ::g::basic::TextBoxAction_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*basic.TextBoxAction*/], offsetof(Haslaamispaivakirja_basicTextBoxAction_DataKey_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Haslaamispaivakirja_basicTextBoxAction_DataKey_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_basicTextBoxAction_DataKey_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Haslaamispaivakirja_basicTextBoxAction_DataKey_Property", options);
    type->fp_build_ = Haslaamispaivakirja_basicTextBoxAction_DataKey_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Haslaamispaivakirja_basicTextBoxAction_DataKey_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Haslaamispaivakirja_basicTextBoxAction_DataKey_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Haslaamispaivakirja_basicTextBoxAction_DataKey_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_basicTextBoxAction_DataKey_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public Haslaamispaivakirja_basicTextBoxAction_DataKey_Property(basic.TextBoxAction obj, Uno.UX.Selector name) :608
void Haslaamispaivakirja_basicTextBoxAction_DataKey_Property__ctor_3_fn(Haslaamispaivakirja_basicTextBoxAction_DataKey_Property* __this, ::g::basic::TextBoxAction* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :610
void Haslaamispaivakirja_basicTextBoxAction_DataKey_Property__Get1_fn(Haslaamispaivakirja_basicTextBoxAction_DataKey_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::basic::TextBoxAction*>(obj, ::TYPES[0/*basic.TextBoxAction*/]))->DataKey(), void();
}

// public Haslaamispaivakirja_basicTextBoxAction_DataKey_Property New(basic.TextBoxAction obj, Uno.UX.Selector name) :608
void Haslaamispaivakirja_basicTextBoxAction_DataKey_Property__New1_fn(::g::basic::TextBoxAction* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_basicTextBoxAction_DataKey_Property** __retval)
{
    *__retval = Haslaamispaivakirja_basicTextBoxAction_DataKey_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :609
void Haslaamispaivakirja_basicTextBoxAction_DataKey_Property__get_Object_fn(Haslaamispaivakirja_basicTextBoxAction_DataKey_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :611
void Haslaamispaivakirja_basicTextBoxAction_DataKey_Property__Set1_fn(Haslaamispaivakirja_basicTextBoxAction_DataKey_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::basic::TextBoxAction*>(obj, ::TYPES[0/*basic.TextBoxAction*/]))->SetDataKey(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :612
void Haslaamispaivakirja_basicTextBoxAction_DataKey_Property__get_SupportsOriginSetter_fn(Haslaamispaivakirja_basicTextBoxAction_DataKey_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public Haslaamispaivakirja_basicTextBoxAction_DataKey_Property(basic.TextBoxAction obj, Uno.UX.Selector name) [instance] :608
void Haslaamispaivakirja_basicTextBoxAction_DataKey_Property::ctor_3(::g::basic::TextBoxAction* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public Haslaamispaivakirja_basicTextBoxAction_DataKey_Property New(basic.TextBoxAction obj, Uno.UX.Selector name) [static] :608
Haslaamispaivakirja_basicTextBoxAction_DataKey_Property* Haslaamispaivakirja_basicTextBoxAction_DataKey_Property::New1(::g::basic::TextBoxAction* obj, ::g::Uno::UX::Selector name)
{
    Haslaamispaivakirja_basicTextBoxAction_DataKey_Property* obj1 = (Haslaamispaivakirja_basicTextBoxAction_DataKey_Property*)uNew(Haslaamispaivakirja_basicTextBoxAction_DataKey_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
