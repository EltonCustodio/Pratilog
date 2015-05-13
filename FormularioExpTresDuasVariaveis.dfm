object FormExpTresDuasVariaveis: TFormExpTresDuasVariaveis
  Left = 220
  Top = 124
  Width = 700
  Height = 400
  HorzScrollBar.Visible = False
  VertScrollBar.Visible = False
  Caption = 'PratLog - Praticando Lógica com Liguagem de Programação'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object PanelExpTresDuasVar: TPanel
    Left = 0
    Top = 0
    Width = 1369
    Height = 705
    TabOrder = 0
    object ImageExpTresDuasVariaveis: TImage
      Left = 0
      Top = 0
      Width = 1353
      Height = 689
    end
    object StringGridExpTresDuasVariaveis: TStringGrid
      Left = 64
      Top = 48
      Width = 569
      Height = 137
      ColCount = 8
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
      ParentFont = False
      TabOrder = 0
      ColWidths = (
        64
        64
        64
        64
        64
        64
        64
        105)
    end
    object ButtonComecar: TButton
      Left = 192
      Top = 232
      Width = 89
      Height = 25
      Caption = 'Começar'
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
      OnClick = ButtonComecarClick
    end
    object ButtonVerificar: TButton
      Left = 360
      Top = 232
      Width = 89
      Height = 25
      Caption = 'Verificar'
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 2
      OnClick = ButtonVerificarClick
    end
    object ButtonPraticar: TButton
      Left = 264
      Top = 280
      Width = 137
      Height = 25
      Caption = 'Praticar Novamente'
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 3
      OnClick = ButtonPraticarClick
    end
  end
end
