// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-88fc3c5a.h>
#include <Fuse.Elements.Element.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Haslaamispaivakirja_FuseElementsElement_X_Property :130
// {
static void Haslaamispaivakirja_FuseElementsElement_X_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(Haslaamispaivakirja_FuseElementsElement_X_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Haslaamispaivakirja_FuseElementsElement_X_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_FuseElementsElement_X_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Haslaamispaivakirja_FuseElementsElement_X_Property", options);
    type->fp_build_ = Haslaamispaivakirja_FuseElementsElement_X_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Haslaamispaivakirja_FuseElementsElement_X_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Haslaamispaivakirja_FuseElementsElement_X_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Haslaamispaivakirja_FuseElementsElement_X_Property__Set1_fn;
    return type;
}

// public Haslaamispaivakirja_FuseElementsElement_X_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :133
void Haslaamispaivakirja_FuseElementsElement_X_Property__ctor_3_fn(Haslaamispaivakirja_FuseElementsElement_X_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Uno.UX.Size Get(Uno.UX.PropertyObject obj) :135
void Haslaamispaivakirja_FuseElementsElement_X_Property__Get1_fn(Haslaamispaivakirja_FuseElementsElement_X_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]))->X(), void();
}

// public Haslaamispaivakirja_FuseElementsElement_X_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :133
void Haslaamispaivakirja_FuseElementsElement_X_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_FuseElementsElement_X_Property** __retval)
{
    *__retval = Haslaamispaivakirja_FuseElementsElement_X_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :134
void Haslaamispaivakirja_FuseElementsElement_X_Property__get_Object_fn(Haslaamispaivakirja_FuseElementsElement_X_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Uno.UX.Size v, Uno.UX.IPropertyListener origin) :136
void Haslaamispaivakirja_FuseElementsElement_X_Property__Set1_fn(Haslaamispaivakirja_FuseElementsElement_X_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* v, uObject* origin)
{
    ::g::Uno::UX::Size v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]))->X(v_);
}

// public Haslaamispaivakirja_FuseElementsElement_X_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :133
void Haslaamispaivakirja_FuseElementsElement_X_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public Haslaamispaivakirja_FuseElementsElement_X_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :133
Haslaamispaivakirja_FuseElementsElement_X_Property* Haslaamispaivakirja_FuseElementsElement_X_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    Haslaamispaivakirja_FuseElementsElement_X_Property* obj1 = (Haslaamispaivakirja_FuseElementsElement_X_Property*)uNew(Haslaamispaivakirja_FuseElementsElement_X_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
