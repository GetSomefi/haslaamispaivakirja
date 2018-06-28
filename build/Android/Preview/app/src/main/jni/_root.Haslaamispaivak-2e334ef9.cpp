// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/build/Android/Preview/cache/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-2e334ef9.h>
#include <_root.ListItem.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Haslaamispaivakirja_ListItem_RealLabel_Property :164
// {
static void Haslaamispaivakirja_ListItem_RealLabel_Property_build(uType* type)
{
    ::TYPES[0] = ::g::ListItem_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*ListItem*/], offsetof(Haslaamispaivakirja_ListItem_RealLabel_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Haslaamispaivakirja_ListItem_RealLabel_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_ListItem_RealLabel_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Haslaamispaivakirja_ListItem_RealLabel_Property", options);
    type->fp_build_ = Haslaamispaivakirja_ListItem_RealLabel_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Haslaamispaivakirja_ListItem_RealLabel_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Haslaamispaivakirja_ListItem_RealLabel_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Haslaamispaivakirja_ListItem_RealLabel_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_ListItem_RealLabel_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public Haslaamispaivakirja_ListItem_RealLabel_Property(ListItem obj, Uno.UX.Selector name) :167
void Haslaamispaivakirja_ListItem_RealLabel_Property__ctor_3_fn(Haslaamispaivakirja_ListItem_RealLabel_Property* __this, ::g::ListItem* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :169
void Haslaamispaivakirja_ListItem_RealLabel_Property__Get1_fn(Haslaamispaivakirja_ListItem_RealLabel_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("Haslaamispaivakirja_ListItem_RealLabel_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::ListItem*>(obj, ::TYPES[0/*ListItem*/]))->RealLabel(), void();
}

// public Haslaamispaivakirja_ListItem_RealLabel_Property New(ListItem obj, Uno.UX.Selector name) :167
void Haslaamispaivakirja_ListItem_RealLabel_Property__New1_fn(::g::ListItem* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_ListItem_RealLabel_Property** __retval)
{
    *__retval = Haslaamispaivakirja_ListItem_RealLabel_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :168
void Haslaamispaivakirja_ListItem_RealLabel_Property__get_Object_fn(Haslaamispaivakirja_ListItem_RealLabel_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :170
void Haslaamispaivakirja_ListItem_RealLabel_Property__Set1_fn(Haslaamispaivakirja_ListItem_RealLabel_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("Haslaamispaivakirja_ListItem_RealLabel_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::ListItem*>(obj, ::TYPES[0/*ListItem*/]))->SetRealLabel(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :171
void Haslaamispaivakirja_ListItem_RealLabel_Property__get_SupportsOriginSetter_fn(Haslaamispaivakirja_ListItem_RealLabel_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public Haslaamispaivakirja_ListItem_RealLabel_Property(ListItem obj, Uno.UX.Selector name) [instance] :167
void Haslaamispaivakirja_ListItem_RealLabel_Property::ctor_3(::g::ListItem* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public Haslaamispaivakirja_ListItem_RealLabel_Property New(ListItem obj, Uno.UX.Selector name) [static] :167
Haslaamispaivakirja_ListItem_RealLabel_Property* Haslaamispaivakirja_ListItem_RealLabel_Property::New1(::g::ListItem* obj, ::g::Uno::UX::Selector name)
{
    Haslaamispaivakirja_ListItem_RealLabel_Property* obj1 = (Haslaamispaivakirja_ListItem_RealLabel_Property*)uNew(Haslaamispaivakirja_ListItem_RealLabel_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
