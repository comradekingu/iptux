#include "gtest/gtest.h"

#include "iptux-core/TestHelper.h"
#include "iptux/HelpDialog.h"

using namespace std;
using namespace iptux;

TEST(HelpDialog, AboutEntry) {
  HelpDialog::AboutEntry(nullptr, false);
}
