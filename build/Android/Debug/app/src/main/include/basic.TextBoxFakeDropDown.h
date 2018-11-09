// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/basic.TextBoxFakeDropDown.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Drawing.IDrawObj-d34d045e.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
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
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace basic{struct TextBoxFakeDropDown;}}
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace basic{

// public partial sealed class TextBoxFakeDropDown :4
// {
::g::Fuse::Controls::Shape_type* TextBoxFakeDropDown_typeof();
void TextBoxFakeDropDown__ctor_8_fn(TextBoxFakeDropDown* __this);
void TextBoxFakeDropDown__get_DataKey_fn(TextBoxFakeDropDown* __this, uString** __retval);
void TextBoxFakeDropDown__set_DataKey_fn(TextBoxFakeDropDown* __this, uString* value);
void TextBoxFakeDropDown__InitializeUX_fn(TextBoxFakeDropDown* __this);
void TextBoxFakeDropDown__New4_fn(TextBoxFakeDropDown** __retval);
void TextBoxFakeDropDown__get_PlaceHolderColor_fn(TextBoxFakeDropDown* __this, uString** __retval);
void TextBoxFakeDropDown__set_PlaceHolderColor_fn(TextBoxFakeDropDown* __this, uString* value);
void TextBoxFakeDropDown__get_Send_fn(TextBoxFakeDropDown* __this, uString** __retval);
void TextBoxFakeDropDown__set_Send_fn(TextBoxFakeDropDown* __this, uString* value);
void TextBoxFakeDropDown__SetDataKey_fn(TextBoxFakeDropDown* __this, uString* value, uObject* origin);
void TextBoxFakeDropDown__SetPlaceHolderColor_fn(TextBoxFakeDropDown* __this, uString* value, uObject* origin);
void TextBoxFakeDropDown__SetSend_fn(TextBoxFakeDropDown* __this, uString* value, uObject* origin);
void TextBoxFakeDropDown__SetTextAlignment_fn(TextBoxFakeDropDown* __this, uString* value, uObject* origin);
void TextBoxFakeDropDown__SetValue_fn(TextBoxFakeDropDown* __this, uString* value, uObject* origin);
void TextBoxFakeDropDown__get_TextAlignment_fn(TextBoxFakeDropDown* __this, uString** __retval);
void TextBoxFakeDropDown__set_TextAlignment_fn(TextBoxFakeDropDown* __this, uString* value);
void TextBoxFakeDropDown__get_Value_fn(TextBoxFakeDropDown* __this, uString** __retval);
void TextBoxFakeDropDown__set_Value_fn(TextBoxFakeDropDown* __this, uString* value);

struct TextBoxFakeDropDown : ::g::Fuse::Controls::Rectangle
{
    uStrong<uString*> _field_Send;
    uStrong<uString*> _field_DataKey;
    uStrong<uString*> _field_Value;
    uStrong<uString*> _field_TextAlignment;
    uStrong<uString*> _field_PlaceHolderColor;
    uStrong< ::g::Uno::UX::Property1*> this_Send_inst;
    uStrong< ::g::Uno::UX::Property1*> TextBoxFakeField_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> TextBoxFakeField_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> TextBoxFakeField_TextAlignment_inst;
    uStrong< ::g::Fuse::Controls::Text*> TextBoxFakeField;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return TextBoxFakeDropDown_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return TextBoxFakeDropDown_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return TextBoxFakeDropDown_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return TextBoxFakeDropDown_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return TextBoxFakeDropDown_typeof()->Init(), __selector4_; }

    void ctor_8();
    uString* DataKey();
    void DataKey(uString* value);
    void InitializeUX();
    uString* PlaceHolderColor();
    void PlaceHolderColor(uString* value);
    uString* Send();
    void Send(uString* value);
    void SetDataKey(uString* value, uObject* origin);
    void SetPlaceHolderColor(uString* value, uObject* origin);
    void SetSend(uString* value, uObject* origin);
    void SetTextAlignment(uString* value, uObject* origin);
    void SetValue(uString* value, uObject* origin);
    uString* TextAlignment();
    void TextAlignment(uString* value);
    uString* Value();
    void Value(uString* value);
    static TextBoxFakeDropDown* New4();
};
// }

}} // ::g::basic
