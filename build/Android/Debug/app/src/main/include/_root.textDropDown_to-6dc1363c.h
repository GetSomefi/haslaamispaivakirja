// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/textDropDown_toimimaton.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
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
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct textDropDown_toimimaton__listBtnCode;}

namespace g{

// public partial sealed class textDropDown_toimimaton.listBtnCode :56
// {
::g::Fuse::Controls::Panel_type* textDropDown_toimimaton__listBtnCode_typeof();
void textDropDown_toimimaton__listBtnCode__get_BgColor_fn(textDropDown_toimimaton__listBtnCode* __this, uString** __retval);
void textDropDown_toimimaton__listBtnCode__set_BgColor_fn(textDropDown_toimimaton__listBtnCode* __this, uString* value);
void textDropDown_toimimaton__listBtnCode__get_DataKey_fn(textDropDown_toimimaton__listBtnCode* __this, uString** __retval);
void textDropDown_toimimaton__listBtnCode__set_DataKey_fn(textDropDown_toimimaton__listBtnCode* __this, uString* value);
void textDropDown_toimimaton__listBtnCode__get_FontSize_fn(textDropDown_toimimaton__listBtnCode* __this, float* __retval);
void textDropDown_toimimaton__listBtnCode__set_FontSize_fn(textDropDown_toimimaton__listBtnCode* __this, float* value);
void textDropDown_toimimaton__listBtnCode__get_SelectedBgColor_fn(textDropDown_toimimaton__listBtnCode* __this, uString** __retval);
void textDropDown_toimimaton__listBtnCode__set_SelectedBgColor_fn(textDropDown_toimimaton__listBtnCode* __this, uString* value);
void textDropDown_toimimaton__listBtnCode__SetBgColor_fn(textDropDown_toimimaton__listBtnCode* __this, uString* value, uObject* origin);
void textDropDown_toimimaton__listBtnCode__SetDataKey_fn(textDropDown_toimimaton__listBtnCode* __this, uString* value, uObject* origin);
void textDropDown_toimimaton__listBtnCode__SetFontSize_fn(textDropDown_toimimaton__listBtnCode* __this, float* value, uObject* origin);
void textDropDown_toimimaton__listBtnCode__SetSelectedBgColor_fn(textDropDown_toimimaton__listBtnCode* __this, uString* value, uObject* origin);
void textDropDown_toimimaton__listBtnCode__SetText_fn(textDropDown_toimimaton__listBtnCode* __this, uString* value, uObject* origin);
void textDropDown_toimimaton__listBtnCode__get_Text_fn(textDropDown_toimimaton__listBtnCode* __this, uString** __retval);
void textDropDown_toimimaton__listBtnCode__set_Text_fn(textDropDown_toimimaton__listBtnCode* __this, uString* value);

struct textDropDown_toimimaton__listBtnCode : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_Text;
    uStrong<uString*> _field_DataKey;
    uStrong<uString*> _field_BgColor;
    uStrong<uString*> _field_SelectedBgColor;
    float _field_FontSize;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return textDropDown_toimimaton__listBtnCode_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return textDropDown_toimimaton__listBtnCode_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return textDropDown_toimimaton__listBtnCode_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return textDropDown_toimimaton__listBtnCode_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return textDropDown_toimimaton__listBtnCode_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return textDropDown_toimimaton__listBtnCode_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return textDropDown_toimimaton__listBtnCode_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return textDropDown_toimimaton__listBtnCode_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return textDropDown_toimimaton__listBtnCode_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return textDropDown_toimimaton__listBtnCode_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return textDropDown_toimimaton__listBtnCode_typeof()->Init(), __selector9_; }

    uString* BgColor();
    void BgColor(uString* value);
    uString* DataKey();
    void DataKey(uString* value);
    float FontSize();
    void FontSize(float value);
    uString* SelectedBgColor();
    void SelectedBgColor(uString* value);
    void SetBgColor(uString* value, uObject* origin);
    void SetDataKey(uString* value, uObject* origin);
    void SetFontSize(float value, uObject* origin);
    void SetSelectedBgColor(uString* value, uObject* origin);
    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
};
// }

} // ::g
