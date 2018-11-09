// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/basic.TextBoxAction.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ITextEditControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace basic{struct TextBoxAction;}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Callback;}}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace basic{

// public partial sealed class TextBoxAction :4
// {
::g::Fuse::Controls::TextInput_type* TextBoxAction_typeof();
void TextBoxAction__ctor_8_fn(TextBoxAction* __this);
void TextBoxAction__InitializeUX_fn(TextBoxAction* __this);
void TextBoxAction__New4_fn(TextBoxAction** __retval);
void TextBoxAction__get_Send_fn(TextBoxAction* __this, uString** __retval);
void TextBoxAction__set_Send_fn(TextBoxAction* __this, uString* value);
void TextBoxAction__SetSend_fn(TextBoxAction* __this, uString* value, uObject* origin);

struct TextBoxAction : ::g::Fuse::Controls::TextInput
{
    uStrong<uString*> _field_Send;
    uStrong< ::g::Uno::UX::Property1*> this_Send_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Fuse::Triggers::Actions::Callback*> TheEnter;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb17;
    uStrong< ::g::Fuse::Triggers::Actions::Callback*> TheNoFocus;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb18;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return TextBoxAction_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return TextBoxAction_typeof()->Init(), __selector1_; }

    void ctor_8();
    void InitializeUX();
    uString* Send();
    void Send(uString* value);
    void SetSend(uString* value, uObject* origin);
    static TextBoxAction* New4();
};
// }

}} // ::g::basic
