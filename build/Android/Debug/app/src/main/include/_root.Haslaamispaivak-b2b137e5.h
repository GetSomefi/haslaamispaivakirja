// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Set;}}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property;}

namespace g{

// internal sealed class Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property :560
// {
::g::Uno::UX::Property1_type* Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property_typeof();
void Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property__ctor_3_fn(Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property* __this, ::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector* name);
void Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property__Get1_fn(Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property__New1_fn(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property** __retval);
void Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property__get_Object_fn(Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property__Set1_fn(Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);

struct Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::Actions::Set*> _obj;

    void ctor_3(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector name);
    static Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property* New1(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
