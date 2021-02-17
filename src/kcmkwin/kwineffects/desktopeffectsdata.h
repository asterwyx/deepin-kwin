/*
    SPDX-FileCopyrightText: 2021 Cyril Rossi <cyril.rossi@enioka.com>

    SPDX-License-Identifier: GPL-2.0-or-later
*/

#ifndef DESKTOPEFFECTSDATA_H
#define DESKTOPEFFECTSDATA_H

#include <QObject>

#include <KCModuleData>

namespace KWin
{
class EffectsModel;

class DesktopEffectsData : public KCModuleDataSignaling
{
    Q_OBJECT

public:
    explicit DesktopEffectsData(QObject *parent = nullptr, const QVariantList &args = QVariantList());
    ~DesktopEffectsData() override;

    bool isDefaults() const override;

private:
    EffectsModel *m_model;
};

}

#endif // DESKTOPEFFECTSDATA_H