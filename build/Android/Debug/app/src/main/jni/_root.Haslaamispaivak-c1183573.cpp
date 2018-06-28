// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-c1183573.h>
#include <basicBtn.Button.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Haslaamispaivakirja_basicBtnButton_Text_Property :146
// {
static void Haslaamispaivakirja_basicBtnButton_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::basicBtn::Button_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*basicBtn.Button*/], offsetof(Haslaamispaivakirja_basicBtnButton_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Haslaamispaivakirja_basicBtnButton_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_basicBtnButton_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Haslaamispaivakirja_basicBtnButton_Text_Property", options);
    type->fp_build_ = Haslaamispaivakirja_basicBtnButton_Text_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Haslaamispaivakirja_basicBtnButton_Text_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Haslaamispaivakirja_basicBtnButton_Text_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Haslaamispaivakirja_basicBtnButton_Text_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_basicBtnButton_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public Haslaamispaivakirja_basicBtnButton_Text_Property(basicBtn.Button obj, Uno.UX.Selector name) :149
void Haslaamispaivakirja_basicBtnButton_Text_Property__ctor_3_fn(Haslaamispaivakirja_basicBtnButton_Text_Property* __this, ::g::basicBtn::Button* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :151
void Haslaamispaivakirja_basicBtnButton_Text_Property__Get1_fn(Haslaamispaivakirja_basicBtnButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::basicBtn::Button*>(obj, ::TYPES[0/*basicBtn.Button*/]))->Text(), void();
}

// public Haslaamispaivakirja_basicBtnButton_Text_Property New(basicBtn.Button obj, Uno.UX.Selector name) :149
void Haslaamispaivakirja_basicBtnButton_Text_Property__New1_fn(::g::basicBtn::Button* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_basicBtnButton_Text_Property** __retval)
{
    *__retval = Haslaamispaivakirja_basicBtnButton_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :150
void Haslaamispaivakirja_basicBtnButton_Text_Property__get_Object_fn(Haslaamispaivakirja_basicBtnButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :152
void Haslaamispaivakirja_basicBtnButton_Text_Property__Set1_fn(Haslaamispaivakirja_basicBtnButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::basicBtn::Button*>(obj, ::TYPES[0/*basicBtn.Button*/]))->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :153
void Haslaamispaivakirja_basicBtnButton_Text_Property__get_SupportsOriginSetter_fn(Haslaamispaivakirja_basicBtnButton_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public Haslaamispaivakirja_basicBtnButton_Text_Property(basicBtn.Button obj, Uno.UX.Selector name) [instance] :149
void Haslaamispaivakirja_basicBtnButton_Text_Property::ctor_3(::g::basicBtn::Button* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public Haslaamispaivakirja_basicBtnButton_Text_Property New(basicBtn.Button obj, Uno.UX.Selector name) [static] :149
Haslaamispaivakirja_basicBtnButton_Text_Property* Haslaamispaivakirja_basicBtnButton_Text_Property::New1(::g::basicBtn::Button* obj, ::g::Uno::UX::Selector name)
{
    Haslaamispaivakirja_basicBtnButton_Text_Property* obj1 = (Haslaamispaivakirja_basicBtnButton_Text_Property*)uNew(Haslaamispaivakirja_basicBtnButton_Text_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
